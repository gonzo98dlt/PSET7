<body style="background-color: #72F284">
    <a href="/"><img width="300" height="110" alt="Time to sell" src="https://i.embed.ly/1/image?url=http%3A%2F%2Fwww.thaigoodview.com%2Ffiles%2Fu56186%2FUntitled-2.gif&key=f34571a3c472496b89650475c5352926"/></a>
    <table class="table table-striped">

    <thead>
        <tr>
            <th style ="color: green;">Type</th>
            <th style ="color: green;">Date and Time</th>
            <th style ="color: green;">Symbol</th>
            <th style ="color: green;">Shares</th>
            <th style ="color: green;">Price</th>
        </tr> 
    </thead>


    <tbody>
    <?php
	    foreach ($table as $row)	
        {   
            echo("<tr>");
            echo("<td>" . $row["transaction"] . "</td>");
            echo("<td>" . date('d/m/y, g:i A',strtotime($row["datetime"])) . "</td>");
            echo("<td>" . $row["symbol"] . "</td>");
            echo("<td>" . $row["shares"] . "</td>");
            echo("<td>$" . number_format($row["price"], 2) . "</td>");
            echo("</tr>");
        }
    ?>
    </tbody>
</table>
<a href="/"><img width="210" height="190" alt="Time to sell" src="https://cdn2.iconfinder.com/data/icons/business-round-icons/500/bag-512.png"/></a>