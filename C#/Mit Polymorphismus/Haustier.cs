using System;

public abstract class Haustier
{
	protected string name;

	public Haustier(string n)
    {
		name = n;
    }

	public abstract void Fressen();
	public abstract void Freuen();
	public abstract void LautGeben();

	public void SchreibeName()
    {
		System.Console.WriteLine(name);
    }
}

