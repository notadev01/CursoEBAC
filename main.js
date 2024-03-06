$(document).ready(function() {
    const form = $('#form');
    const formTarefa = $('#tarefa');
    const ul = $('ul');
    let valorTarefa

    $('form').on('submit', function(e) {
        e.preventDefault();
        
        valorTarefa = $(formTarefa).val();

        $(ul).append($(
            `<li id="todo" style="display:none;">${valorTarefa}</li>`).fadeIn()
        );

        $(formTarefa).val('');

    })

    $(document).on('click', 'li', function() {
        $(this).css("text-decoration", "line-through");
        $(this).css("cursor", "default");
    });
});