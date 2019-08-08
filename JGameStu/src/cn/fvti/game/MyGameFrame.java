package cn.fvti.game;

import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

import javax.swing.JFrame;

/**
 * 画游戏窗口
 * @author 莫硕文
 *
 */
public class MyGameFrame  extends JFrame{

	
	@Override
	public void paint(Graphics g) {
		Color c = g.getColor();
		Font f = g.getFont();
		g.setColor(Color.blue);
		super.paint(g);
		g.drawLine(100, 100, 300, 300);
		g.drawRect(100, 100, 300, 300);
		g.drawOval(100, 100, 300, 300);
		g.setColor(Color.green);
		g.fillRect(100, 100, 40, 40);
		g.setColor(Color.black);
		g.setFont(new Font("宋体",Font.BOLD,50));
		g.drawString("Test",150,150);
		g.setColor(c);
		g.setFont(f);
	}
	/*
	 * 初始化窗口
	 */
	public void lunchFrame() {
		this.setTitle("PlaneGame");//标题
		this.setSize(500, 500);//大小
		this.setLocation(300, 300);
		this.setVisible(true);//可见
		
		this.addWindowListener(new WindowAdapter() {
			@Override
			public void windowClosing(WindowEvent e) {
				System.exit(0);
			}
		});
		
		
	}
	
	public static void main(String[] args) {
		MyGameFrame f = new MyGameFrame();
		f.lunchFrame();
	}
}
