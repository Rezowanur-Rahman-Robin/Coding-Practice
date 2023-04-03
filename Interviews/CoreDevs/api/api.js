const express = require('express');

const app = express();

app.get('/api',(req,res)=>{
  res.json("api running on 3003")
})

app.listen(3003, () => {
  console.log('API server listening on port 3003');
});
