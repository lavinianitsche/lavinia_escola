const emailInput = document.getElementById("email");
const senhaInput = document.getElementById("senha");

function time() {
    let data = new Date();
    console.log(data.getHours() + ":" + data.getMinutes() + ":" + data.getSeconds());
}
console.log(time());

