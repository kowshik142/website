function loadService(service) {
    // Hide all service content divs
    var serviceContents = document.querySelectorAll('#service-content > div');
    serviceContents.forEach(function(content) {
        content.classList.add('hidden');
    });

    // Show the selected service content
    var selectedContent = document.getElementById(service + '-content');
    selectedContent.classList.remove('hidden');
}
