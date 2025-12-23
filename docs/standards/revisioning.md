# Hardware Revisioning Standard

## Purpose

This document defines the hardware revisioning scheme used across all ADA
hardware projects. The goal is to maintain clear traceability between schematic
intent, PCB layout evolution, and physical fabrication orders, while avoiding
confusion between design state and manufactured artifacts.

This standard applies to all ADA hardware unless explicitly overridden in a
project README.

---

## Version Format

All hardware designs use the following version format:

vX.Y.Z

---

## Version Field Definitions

### X — Fabrication Order Index

X represents the number of times a PCB has been fabricated (i.e., a physical
board order has been placed).

- Increment X **every time Gerbers are sent to fabrication**
- X corresponds to a physically built board
- X never increments for design-only work

Examples:
- v1.0.0 → first fabricated board
- v2.0.0 → second fabricated board

---

### Y — PCB Layout Revision

Y represents PCB layout changes made **after the most recent fabrication**.

- Increment Y for layout-only changes:
  - routing
  - placement
  - stackup changes
  - DFM / DFA fixes
  - copper pours, stitching, impedance tuning
- Y does **not** change schematic intent
- Y indicates how many layout revisions are pending since the last build

Reset behavior:
- Y resets to 0 when a new fabrication order is placed (X increments)

Examples:
- v1.1.0 → one layout change after the first build
- v2.3.0 → three layout changes after the second build

---

### Z — Major Schematic Revision

Z represents a major schematic or architectural change.

Increment Z when the electrical meaning of the design changes, including:
- power architecture changes
- interface or pinout changes
- memory architecture changes
- addition or removal of major functional ICs
- changes that materially affect bring-up or system behavior

Do NOT increment Z for:
- passive value tuning
- same-function component substitutions
- silkscreen or documentation fixes
- layout-only changes

Z represents a new schematic generation.

---

## Reset Rules

To preserve clarity and traceability, the following reset rules apply:

- When **X increments** (new fabrication):
  - Reset Y to 0
  - Z remains unchanged

- When **Z increments** (major schematic change):
  - Reset X to 0
  - Reset Y to 0

This reflects the start of a new schematic generation and fabrication lineage.

---

## Version State vs Fabricated State

The version number represents the **current design state**, not only fabricated
boards.

As a result:
- Versions with Y > 0 represent design changes that have **not yet been built**
- Only versions where Y = 0 correspond exactly to a fabricated board

Example timeline:
- v1.0.0 → first board fabricated
- v1.1.0 → layout fix identified (not yet built)
- v2.0.0 → second board fabricated with layout fix
- v2.1.0 → additional layout change after second build

---

## Git Tagging Policy

Every fabrication order **must** be tagged in Git.

Tag format:
- <project-name>-vX.Y.Z

Examples:
- proto-core-v1.0.0
- proto-core-v2.0.0

Tags must correspond to the exact commit used to generate fabrication outputs.

---

## Silkscreen and File Naming

- The full version string (vX.Y.Z) should be included on PCB silkscreen where
  space allows
- Fabrication and assembly files must include the version string in filenames

Examples:
- proto-core_v2.0.0_fab.zip
- proto-core_v2.0.0_assembly.pdf

---

## Relationship to KiCad Projects

Version increments **do not** automatically require a new KiCad project.

A new KiCad project is created only when the functional identity of the board
changes (e.g., interface changes, architectural role changes, incompatible
module revisions).

Revisioning tracks evolution **within** a project; project boundaries track
identity changes.

---

## Summary

- X tracks physical fabrication orders
- Y tracks layout changes since the last fabrication
- Z tracks major schematic generations
- Git tags mark every fabricated board
- Version numbers communicate both build history and current design state

Consistency and discipline in applying this standard are required to maintain
long-term traceability and credibility.
