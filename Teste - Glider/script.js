const $js_glider = document.querySelector('js-slides')

new Glider($js_glider, {
    slidesToShow: 2,
    slidesToScroll: 2,
    draggable: true,
    dots: '.dots',
    arrows: {
        prev: '.glider-prev',
        next: '.glider-next'
    }
})