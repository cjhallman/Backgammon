using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PlayerFactory
{
    public static Player GetPlayer(string PlayerType)
    {
        switch (PlayerType)
        {
            case "Human":
                return new HumanPlayer();
            case "Random CPU":
                return new RandomCPUPlayer();
            case "Simple CPU":
                return new SimpleCPUPlayer();
            default:
                return null;
        }
    }

}
