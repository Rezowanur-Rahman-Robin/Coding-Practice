const express = require('express');
const proxyServer = require('./api');
const Logger = require('./logger');
const requestTracker = require('./middlewares/requestTacker');
const cors = require('cors');
const logger = new Logger('logs')
const app = express();
app.use(cors())
app.use(requestTracker);
app.use(proxyServer);

app.listen(8000, () => {
  logger.info('Proxy server listening on port 8000');
});
