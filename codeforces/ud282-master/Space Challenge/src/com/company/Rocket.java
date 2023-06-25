package com.company;

public class Rocket implements Spaceship {

    int weight;
    int limits;

    @Override
    public Boolean land() {
        return true;
    }
    @Override
     public Boolean launch(){
        return  true;
    }

    @Override
    public Boolean canCarry(Item item) {
        if(weight+item.weight<limits)return  true;
        else
            return  false;
    }

    @Override
    public void carry(Item item) {
        weight+=item.weight;
    }
}
