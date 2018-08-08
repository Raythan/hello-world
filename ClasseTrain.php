<?php
require_once 'InterfaceTrain.php';
class ClasseTrain implements InterfaceTrain {// Nome da Classe
    private $atributo1; //Number
    private $atributo2; //String
    private $atributo3; // Boolean
    public function __construct(){
        $this->atributo1 = 1;
        $this->atributo2 = "Raythan";
        $this->atributo3 = TRUE;
    }
    private function getAtributo1() {
        echo "Atributo1: " . $this->atributo1 . "</br>";
        return $this->atributo1;
    }
    private function setAtributo1(){
        echo "Colocando atributo1...</br>";
        $this->atributo1++;
    }
    private function getAtributo2(){
        echo "Atributo2: " . $this->atributo2 . "</br>";
        return $this->atributo2;
    }
    private function setAtributo2($p){ // Passando informação com parâmetro
        echo "Colocando atributo2 Com parâmetro " . $p . "</br>";
        $this->atributo2 = $p;
    }
    private function getAtributo3(){
        echo "Atributo3: " . $this->atributo3 . "</br>";
        return $this->atributo3;
    } 
    private function setAtributo3(){
        echo "Colocando atributo3... Booleano FALSE" . "</br>";
        $this->atributo3 = FALSE;
    }

    public function colocarAtributo1() {
        $this->setAtributo1();
    }

    public function colocarAtributo2($p) {
        $this->setAtributo2($p);
    }

    public function colocarAtributo3() {
        $this->setAtributo3();
    }

    public function pegarAtributo1() {
        $this->getAtributo1();
    }

    public function pegarAtributo2() {
        $this->getAtributo2();
    }

    public function pegarAtributo3() {
        $this->getAtributo3();
    }

}
