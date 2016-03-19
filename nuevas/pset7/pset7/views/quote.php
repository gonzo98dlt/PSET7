<body style="background-color: #CCE2F2">
    <div class="row">
        <div class="col-md-1">
        </div>
        <div class="col-md-10">
            <h1><?= $stock["name"] ?></h1>
            <h1><?= $stock["symbol"] ?></h1>
            Price: $<?= $stock["price"] ?>
            <form action="buy.php" method="post">
                <fieldset>
                    <div class="form-group">
                    <input autocomplete="off" autofocus class="form-control" name="shares" placeholder="Shares" type="int"/>
                    </div>
                        <!-- Nuevo---->
                        <input type="hidden" name="symbol" value="<?= $stock["symbol"] ?>">
                        <!-- Fin nuevo -->
                        <button focus class="btn btn-primary" type="submit" style="color: white;">
                            Buy stock
                        </button>
                </fieldset>
            </form>
        </div>
    </div>
</body>