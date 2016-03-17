<table class = "table table-stripped">
    <thead>
        <tr>
            <th style = "color: blue;">Name</th>
            <th style = "color: blue;">Symbol</th>
            <th style = "color: blue;">Shares</th>
            <th style = "color: blue;">Price</th>
            <th style = "color: blue;">Total</th>
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