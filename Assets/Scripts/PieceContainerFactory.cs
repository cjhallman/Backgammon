using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class PieceContainerFactory
{
    public static PieceContainerControl GetPieceContainer(string pcType, string name, GameControl gm, List<GameObject> pieces)
    {
        switch (pcType)
        {
            case "Spot":
                return new SpotControl(name, pieces);
            case "Base":
                return new BaseControl(name, gm, pieces);
            case "Jail":
                return new JailControl(name, gm, pieces);
            default:
                return null;
        }
    }

    public static PieceContainerControl GetPieceContainer(PieceContainerObject pObj)
    {
        switch (pObj.pcType)
        {
            case "Spot":
                return new SpotControl((SpotControl) pObj.pcc);
            case "Base":
                return new BaseControl(pObj.pcc);
            case "Jail":
                return new JailControl(pObj.pcc);
            default:
                return null;
        }
    }
}
