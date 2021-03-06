package cg.GUI.action;

import java.awt.Point;

import cg.GUI.CGPaint;
import cg.GUI.IRasterDevice;
import cg.algorithms.circle.CircleAlgorithmChooser;


public class DoFillCircle extends PerformNPointsAction {

	// Este comando precisa de 2 pontos
	public DoFillCircle() { super(2); }
	
	public void doAction(CGPaint cg, Point[] points)
	{
		Point start = points[0];
		Point end = points[1];

		IRasterDevice dc=cg.getRasterDisplay();
		int radius = (int) Math.abs(end.distance(start));

		//long startTime = System.currentTimeMillis();
		long startTime = System.nanoTime();
		CircleAlgorithmChooser.getAlgorithm("CircleFill").fillCircle(dc, start, radius,cg.getCurrentColor());
		//long endTime = System.currentTimeMillis();
		long endTime = System.nanoTime();
		dc.drawStatusString(String.format("Time (microsecs): %d", (endTime - startTime)/1000));

		dc.addCircle(start, radius);
	}
	
	public void drawAction(CGPaint cg, Point[] points, int nPoints, Point mousePos){
		if(nPoints == 1){
			cg.drawInfoCircle(points[0], mousePos);
		}
	}	
}
