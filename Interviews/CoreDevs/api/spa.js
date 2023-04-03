const express = require('express');

const app = express();

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/index.html');
});


app.listen(3005, () => {
  console.log('0Auth server listening on port 3005');
});
