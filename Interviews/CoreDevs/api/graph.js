const express = require('express');
const cors = require("cors") ;
app = express()
app.use(cors())
app.use(express.json());

app.use('/graph',(req,res)=>{
  res.json("graph running on 3002")
})

app.listen(3002, () => {
  console.log('Graph server listening on port 3002');
});
