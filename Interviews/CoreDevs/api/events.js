const express = require('express');

const app = express();

app.get('/events',(req,res)=>{
  res.json("events running on 3004")
})

app.listen(3004, () => {
  console.log('Events server listening on port 3004');
});
