<?php

    // configuration
    require("../includes/config.php");

    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // else render form
        render("register_form.php", ["title" => "Register"]);
    }

    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // TODO
        // validate submission
        if ($_POST["firstname"] == NULL)
        {
            apologize("Tell us your first name");
        }
        else if ($_POST["lastname"] == NULL)
        {
            apologize("Tell us your last name");
        }
        else if (($_POST["username"]) == NULL)
        {
            apologize("You must provide your username.");
        }
        
        else if ($_POST["password"] == NULL)
        {
            apologize("You must provide your password.");
        }
        
        else if ($_POST["password"] !== $_POST["password"])
        {
            apologize("Passwords do not match!");
        }
        
        else if (CS50::query("INSERT IGNORE INTO users (username, hash, cash, firstname, lastname) VALUES(?, ?, 10000.0000, ?, ?)", $_POST["username"], password_hash($_POST["password"], PASSWORD_DEFAULT), $_POST["firstname"], $_POST["lastname"]) == 0)
        {
            apologize("Username already exists");
        }       
        else
        {
            $rows = CS50::query("SELECT LAST_INSERT_ID() AS id");
            $id = $rows[0]["id"];
            $_SESSION["id"] = $id;
            redirect("index.php");
        }
    }
?>