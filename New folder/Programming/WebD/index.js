console.log("hello world",4+5,"another log")
var num1=34;
var num2=45;
console.log(num1+num2);

let myDate=new Date();
console.log(myDate);

let a= document.getElementById("btn");
console.log(a);
b=document.getElementsByTagName('h1')
function action()
{
   b[0].innerText="button was clicked"
}
btn.addEventListener("click",action())