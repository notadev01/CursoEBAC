const form = document.getElementById('formulario');

form.addEventListener('submit', function(e) {
    e.preventDefault();

    if (document.querySelector('#campoA').value < document.querySelector('#campoB').value) {
        document.querySelector('#mensagem').innerHTML = "O número do campo B é maior do que o número do Campo A."
        document.querySelector('#mensagem').style.display = 'block';
        document.querySelector('#mensagem').style.backgroundColor = 'rgb(31, 177, 31)';
        document.querySelector('#mensagem').style.color = '#fff';
        document.querySelector('#mensagem').style.outline = '#000';;
    } else if (document.querySelector('#campoA').value > document.querySelector('#campoB').value) {
        document.querySelector('#mensagem').innerHTML = "O número do campo B NÃO é maior do que o número do Campo A."
        document.querySelector('#mensagem').style.display = 'block';
        document.querySelector('#mensagem').style.backgroundColor = 'rgb(168, 9, 9)';
        document.querySelector('#mensagem').style.color = '#fff';
    } else {
        document.querySelector('#mensagem').innerHTML = "O número do campo B é igual ao número do Campo A."
        document.querySelector('#mensagem').style.display = 'block';
        document.querySelector('#mensagem').style.backgroundColor = 'rgb(233, 217, 0)';
    }
})

form.addEventListener('keydown', function(e) {
    document.querySelector('#mensagem').style.display = 'none';
})