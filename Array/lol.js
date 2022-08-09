console.log("OK");
        
const fetch=require("node-fetch");
setTimeout(()=>{
console.log("Timeout");
},5000);

fetch("https://www.youtube.com")
.then(function cbF(){
    console.log("REACHED");
})
console.log("BROOO");