using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PlayerFactory
{
    public static Player GetPlayer(string playerType)
    {
        switch (playerType)
        {
            case "Human":
                return new HumanPlayer();
            case "Random CPU":
                return new RandomCPUPlayer();
            case "Simple CPU":
                return new SimpleCPUPlayer();
            case "Aggressive CPU":
                return new AggressiveCPUPlayer();
            case "Normal CPU":
                return new NormalCPUPlayer();
            default:
                return null;
        }
    }

}
