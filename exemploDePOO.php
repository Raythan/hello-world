<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <pre>
        <?php
            require_once 'InterfaceTrain.php';
            require_once 'ClasseTrain.php';
            $teste = new ClasseTrain();
            print_r($teste);
            $teste->pegarAtributo1();
            $teste->colocarAtributo1();
            $teste->pegarAtributo1();
            $teste->pegarAtributo2();
            $teste->colocarAtributo2("Feioso");
            $teste->pegarAtributo2();
            $teste->pegarAtributo3(); 
            $teste->colocarAtributo3();
            $teste->pegarAtributo3(); 
        ?>
        
        <?php
            interface InterfaceTrain {
                public function pegarAtributo1();
                public function colocarAtributo1();
                public function pegarAtributo2();
                public function colocarAtributo2($p); // Código da interface passando parâmetros
                public function pegarAtributo3();
                public function colocarAtributo3();
            }
        ?>
        </pre>
    </body>
</html>
