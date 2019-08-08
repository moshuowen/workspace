package cn.fvti.game;

import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

import javax.swing.JFrame;

/**
 * ����Ϸ����
 * @author Ī˶��
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
		g.setFont(new Font("����",Font.BOLD,50));
		g.drawString("Test",150,150);
		g.setColor(c);
		g.setFont(f);
	}
	/*
	 * ��ʼ������
	 */
	public void lunchFrame() {
		this.setTitle("PlaneGame");//����
		this.setSize(500, 500);//��С
		this.setLocation(300, 300);
		this.setVisible(true);//�ɼ�
		
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
