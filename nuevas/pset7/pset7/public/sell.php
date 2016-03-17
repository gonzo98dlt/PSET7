<?php
// conf
    require("../includes/config.php"); 
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        $symbols = CS50::query("SELECT symbol FROM Portfolio WHERE user_id = ?", $_SESSION["id"]);
        render("sell_form.php", ["title" => "Sell", "symbols" => $symbols]);
         
    }
    
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        if ($_POST["symbol"]=="Symbols")
        {
            apologize("Please enter the stock symbol.");
        }
        
        $stock = lookup($_POST["symbol"]);
        $shares = CS50::query("SELECT shares FROM Portfolio WHERE user_id = ? AND symbol = ?", $_SESSION["id"], $_POST["symbol"]);
        $value = $stock["price"] * $shares[0]["shares"];                                
        CS50::query("UPDATE users SET cash = (cash + ".$value.") WHERE id = ?", $_SESSION["id"]);
        $rows = CS50::query("DELETE FROM Portfolio WHERE user_id = ? AND symbol = ?", $_SESSION["id"], $stock["symbol"]);
        $type = 'Sell';
        CS50::query("INSERT INTO history (user_id, transaction, symbol, shares, price) VALUES (?, ?, ?, ?, ?)", $_SESSION["id"], $type, $_POST["symbol"], $shares[0]["shares"], $stock["price"]);
        
        redirect("/");    
    }    
?>