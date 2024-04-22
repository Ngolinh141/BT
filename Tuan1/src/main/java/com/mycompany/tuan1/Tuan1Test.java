/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.tuan1;

/**
 *
 * @author 503
 */
// CalculatorTest.java

//import org.junit.jupiter.api.Test;
//import static org.junit.jupiter.api.Assertions.*;

public class Tuan1Test {

    Tuan1 calculator = new Tuan1();

    
    public void testAdd() {
        assertEquals(5, calculator.add(2, 3));
        assertEquals(-1, calculator.add(-2, 1));
    }


    public void testSubtract() {
        assertEquals(1, calculator.subtract(4, 3));
        assertEquals(-3, calculator.subtract(0, 3));
    }

    
    public void testMultiply() {
        assertEquals(6, calculator.multiply(2, 3));
        assertEquals(0, calculator.multiply(0, 3));
    }

 
    public void testDivide() {
        assertEquals(2, calculator.divide(6, 3));
        assertEquals(0, calculator.divide(0, 3));
    }

 
    public void testDivideByZero() {
        try {
            calculator.divide(6, 0);
            fail("Expected an ArithmeticException to be thrown");
        } catch (ArithmeticException e) {
            assertEquals("/ by zero", e.getMessage());
        }
    }

    private void assertEquals(int i, int add) {
            throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    private void fail(String expected_an_ArithmeticException_to_be_thr) {
            throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    private void assertEquals(String _by_zero, String message) {
            throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

}