$(document).ready(function () {
    
    $('#telefone').mask('(00) 00000-0000', {
        placeholder: '(12) 34567-8910'
    })

    $('#cpf').mask('000.000.000-00', {
        placeholder: '123.456.789-10'
    })

    $('#cep').mask('00000-000', {
        placeholder: '12345-678'
    })

    $('form').validate({
        rules: {
            nome: {
                required: true
            },
            email: {
                required: true,
                email: true
            },
            telefone: {
                required: true
            },
        }
    })
})