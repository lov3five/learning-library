let authenticated = true

renderApp = () => {
    console.log("My App");
}

renderLogin = () => {
    console.log("Login page");
}

/* if (authenticated) {
    renderApp();
} else {
    renderLogin();
} */

authenticated ? renderApp() : renderLogin()



