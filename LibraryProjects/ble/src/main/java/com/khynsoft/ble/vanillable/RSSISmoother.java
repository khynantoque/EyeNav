package com.khynsoft.ble.vanillable;

public class RSSISmoother {
    private double meanRSSI = 0;
    private double alpha;

    public RSSISmoother() {
        alpha = 0.75;
    }

    public void setAlpha(double alpha) {
        this.alpha = alpha;
    }

    public int getFilteredRssi(int recentRssi) {
        if (meanRSSI == 0)
            meanRSSI = recentRssi;
        double smoothRssi = alpha * recentRssi + (1 - alpha) * meanRSSI;
        meanRSSI = smoothRssi;
        return (int) smoothRssi;
    }

    public double getMeanRSSI() {
        return meanRSSI;
    }
}
