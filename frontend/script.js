const burger = document.getElementById("burger");
const nav = document.querySelector('nav');

function burgermenu() {
    nav.classList.toggle('active')
}

burger.addEventListener('click', burgermenu);