<body style="background-color: #ABEDE0">
    <h2 style= "text-align: right; color: #11118E;font-family: Bodoni72;"> 
            <?php $firstname = CS50::query("SELECT firstname FROM users WHERE id = ?", $_SESSION["id"]);
                $firstname = $firstname[0]["firstname"];
                print("Hello, ".($firstname));
            ?> 
            <?php $lastname = CS50::query("SELECT lastname FROM users WHERE id = ?", $_SESSION["id"]);
                $lastname = $lastname[0]["lastname"];  
                print($lastname);
            ?></h2>
    <iframe width="560" height="315" src="https://www.youtube.com/embed/8plnFoXnVoo?rel=0&autoplay=1" frameborder="0" allowfullscreen></iframe>
    <h1 style= "font-size: 30px; color: #0A9393; font-family: BanglaMN;"> CURRENT CASH: $<?= number_format($cash) ?></h1>
    
    <table class = "table table-stripped">
        <thead>
            <tr>
                <th style = "color: #0A9393;">Name</th>
                <th style = "color: #0A9393;">Symbol</th>
                <th style = "color: #0A9393;">Shares</th>
                <th style = "color: #0A9393;">Price</th>
                <th style = "color: #0A9393;">Total</th>
            </tr>
        </thead>
        
        <tbody>
            <?php foreach ($positions as $position): ?>
    
        <tr>
            <td style = "font-family: Arial black;"><?= $position["name"] ?></td>
            <td style = "font-family: Verdana; font-size: 15px;"><?= $position["symbol"] ?></td>
            <td><?= $position["shares"] ?></td>
            <td style = "font-size: 15px;"><strong><?= number_format($position["price"],2) ?></strong></td>
            <td style = "font-size: 15px;"><strong><?= number_format($position["total"],2) ?></strong></td>
        </tr>
    
    <?php endforeach ?>
            
        </tbody>
    </table>
</body>