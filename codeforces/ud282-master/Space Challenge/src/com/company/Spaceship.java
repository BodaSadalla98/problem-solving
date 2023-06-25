package com.company;

public interface Spaceship {

    Boolean launch();
    Boolean land();
    Boolean canCarry(Item item);
    void carry(Item item);
}
