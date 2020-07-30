package org.mini.layout;

public class XTable
        extends XPanel {
    static public final String XML_NAME = "table";

    public XTable() {
        super(null);
    }

    public XTable(XContainer xc) {
        super(xc);
    }

    public String getXmlTag() {
        return XML_NAME;
    }

    boolean parseNoTagText() {
        return false;
    }


    protected void preAlignVertical() {
        super.preAlignVertical();

        int floatCount = 0;
        int nonFloatPix = 0;
        for (int i = 0; i < children.size(); i++) {
            XObject xo = children.get(i);
            if (xo.vfloat) {
                floatCount++;
            } else {
                nonFloatPix += xo.height;
            }
        }

        if (viewH - nonFloatPix > 0) {
            int floatAvgH = floatCount == 0 ? 0 : (viewH - nonFloatPix) / floatCount;
            int yOffset = 0;
            for (int i = 0; i < children.size(); i++) {
                XObject xo = children.get(i);
                xo.y += yOffset;
                xo.getGui().setLocation(xo.x, xo.y);
                if (xo.vfloat) {
                    yOffset += floatAvgH - xo.height;
                    xo.viewH = xo.height = floatAvgH;
                    xo.getGui().setSize(xo.width, xo.height);
                    int tx = xo.x;
                    int ty = xo.y;
                    ((XTr) xo).reSize(xo.width, xo.height);
                    xo.x=tx;
                    xo.y=ty;
                    xo.getGui().setLocation(xo.x, xo.y);
                }
            }
        }

    }

}
