// Add an event listener to the form to handle the submit event
document.getElementById('loginForm').addEventListener('submit', function(event) {
    event.preventDefault(); // Prevent the default form submission

    // Get the input values from the form
    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;

    // Simple login validation (replace this with your actual login logic)
    if (username === 'admin' && password === 'password') {
        alert('Login successful!');
        // Add further actions like redirecting to another page
    } else {
        alert('Invalid username or password.');
    }
});
