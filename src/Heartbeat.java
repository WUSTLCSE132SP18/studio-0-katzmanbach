
public class Heartbeat {

	public static void main(String[] args) {
		int n = 0;
		while(true)
		{
			System.out.println(n + " seconds have passed");
			n++;
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}

	}
}
