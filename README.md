
# Quantum Simulation Framework Using ITensor

This project is a framework for a DMRG manalysis of the Kagome lattice and exploring superconducting phases. It is built on the open-source [ITensor library](https://itensor.org) (GPLv3), which provides core tensor operations, operator definitions, and Hamiltonian construction tools.

---

## Overview

While ITensor provides the foundational framework, all extensions, algorithms, and data-processing pipelines in this project are original work by Brendan Stork unless otherwise noted. The project focuses on multi-bond Hamiltonians, superconductivity algorithms, and Python-based data analysis.

---

## Original Contributions

1. **Lattice Geometry Functions**  
   - Developed a header file providing lattice geometry functionality not present in ITensor.

2. **Multi-Bond Hamiltonian Construction**  
   - Extended ITensor’s Hamiltonian module to handle multiple bond types.
   - Modified internal ITensor headers to support these changes.

3. **Expectation Value Computation**  
   - Used ITensor operators and algorithms, experimenting with different approaches to optimize computation of expectation values.

4. **Data Processing**  
   - Processed simulation results to compute various physical quantities.

5. **Random Initial States**  
   - Created routines to generate random distributions of system initial states for simulations.

6. **Custom Superconductivity Algorithms**  
   - Developed algorithms for simulating different superconducting phases, including handling multi-operator combinations and advanced indexing strategies.  
   - Through development, identified a limitation in ITensor’s current support for fermion anticommutation signs, which affected correctness for certain simulations.  
   - Despite this limitation, the work demonstrates extensive framework development, algorithmic exploration, and problem-solving.

7. **File Output and Python Analysis**  
   - Designed a workflow to save simulation data to files and analyze results using Python.

---

## Repository Structure
