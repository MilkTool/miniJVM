/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package org.mini.gui;

import static org.mini.nanovg.Nanovg.nvgFontFace;
import static org.mini.nanovg.Nanovg.nvgFontSize;

/**
 * @author gust
 */
public class GCanvas extends GPanel {

    protected GGraphics g;

    public GCanvas() {

    }

    public GCanvas(int x, int y, int w, int h) {
        this((float) x, y, w, h);
    }

    public GCanvas(float x, float y, float w, float h) {
        setLocation(x, y);
        setSize(w, h);
    }


    public boolean paint(long vg) {
        if (g == null) {
            g = new GGraphics(this, vg);
        }
        super.paint(vg);
        nvgFontSize(vg, g.getFontSize());
        nvgFontFace(vg, GToolkit.getFontWord());
        paint(g);
        return true;
    }

    public void paint(GGraphics g) {

    }

    public int getWidth() {
        return (int) getW();
    }

    public int getHeight() {
        return (int) getH();
    }

    public GGraphics getGraphics(){
        return g;
    }
}
