const httpProxy = require('http-proxy');
const routes = require('../constants/routeContants');
const Logger = require('../logger');

const logger = new Logger('logs')
const proxy = httpProxy.createProxyServer();

const proxyServer = (req, res) => {
  const requestId = req.requestId;
  const path = req.url;
  const microserviceUrl = routes[path];
 
  proxy.web(req, res, {
    target: microserviceUrl,
    headers: req.headers
    
  }, (error, proxyRes) => {
    if (error) {
      logger.error(`Error proxying request to ${microserviceUrl}${path}: ${error}`, { requestId });
      res.sendStatus(500);
      return;
    } 

  });
}

module.exports = proxyServer