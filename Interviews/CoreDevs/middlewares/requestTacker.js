const { v4: uuidv4 } = require('uuid');
const routes = require('../constants/routeContants');
const Logger = require('../logger');
const logger = new Logger('proxyReq');

const requestTracker=(req, res, next)=> {
  const requestId = uuidv4();
  req.requestId = requestId;
  const path = req.url;
  const microserviceUrl = routes[path];
  //console.log(microserviceUrl);
  if (!microserviceUrl) {
    logger.warn(`Unknown route requested: ${path}`, { requestId });
    res.sendStatus(404);
    return;
  }
    res.header("Cache-Control", "no-cache, no-store, must-revalidate");
    res.header("Pragma", "no-cache");
    res.header("Expires", 0)
    
  logger.info(`Proxied request to ${microserviceUrl}${path}`, { requestId });
  next();
}

module.exports= requestTracker;