<body style="background-color: #C1C4C9">
    <form action="login.php" method="post">
        <fieldset>
            <div class="form-group">
                <input style ="background-color: #E8E8E8;" autocomplete="off" autofocus class="form-control" name="username" placeholder="Username" type="text"/>
            </div>
            <div class="form-group">
                <input style ="background-color: #E8E8E8;" class="form-control" name="password" placeholder="Password" type="password"/>
            </div>
            <div class="form-group">
                <button focus class="btn btn-primary" type="submit">
                    <span aria-hidden="true" class="glyphicon glyphicon-log-in"></span>
                    Log In
                </button>
            </div>
        </fieldset>
    </form>
    <div>
        or <a href="register.php">register</a> for an account
    </div>
</body>