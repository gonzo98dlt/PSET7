<body style="background-color: #EFEBBF">
    <form action="sell.php" method="post">
        <fieldset>
            <div class="form group">
                <select style ="background-color: #E8E8E8;" class ="form-control" name="symbol">
                    <option value="Symbols">Symbol </option>
                    <?php
                    foreach ($symbols as $symbol)
                    {
                        echo '<option value="'.$symbol["symbol"].'">'.$symbol["symbol"].'</option>';
                    }
                    ?>
                </select>
            </div>
            <div class="control-group">
                <input style ="background-color: #E8E8E8;" class="input-big" name="shares" placeholder="Shares" type="text"/>
            </div>
            <div class="form-group">
                <button style ="color: white; font-family: Helvetica;" focus class="btn btn-warning" type="submit"> Sell </button>
            </div>
        </fieldset>
    </form>
</body>