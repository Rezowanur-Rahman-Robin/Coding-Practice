const express = require('express');

const app = express();

app.get('/oauth',(req,res)=>{
  res.json("oauth running on 3001")
})

app.listen(3001, () => {
  console.log('0Auth server listening on port 3001');
});
