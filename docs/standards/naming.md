# Naming Standard

## Purpose

This document defines the naming conventions used across all ADA hardware
projects to ensure consistency, portability, and long-term maintainability.

Unless explicitly overridden, these rules apply to all files, folders, projects,
and design artifacts within this repository.

---

## Global Rules

- Use **lowercase only**
- Use **hyphens (`-`) as separators**
- Do **not** use spaces or underscores
- Names must be explicit and unambiguous

Examples:
- proto-core
- proto-core-carrier
- power-tree.md

---

## Directory Naming

Directories represent collections or categories and use plural nouns where
appropriate.

Examples:
- docs/
- cores/
- carriers/
- modules/
- systems/
- libraries/
- tools/
- external/

Project directories use descriptive names:
- proto-core
- proto-core-carrier
- control-core

---

## File Naming

### Markdown Files

- Use lowercase, hyphen-separated names
- Use nouns or short phrases
- Do not include version numbers in filenames

Examples:
- overview.md
- architecture.md
- power-tree.md
- bringup.md
- revisioning.md

---

### KiCad Project Files

KiCad files use the project name consistently and are **not versioned by name**.

Examples:
- proto-core.kicad_pro
- proto-core.kicad_sch
- proto-core.kicad_pcb

Versioning is handled through Git history, tags, and manufacturing outputs.

---

## Manufacturing and Export Artifacts

Generated artifacts that leave the repository must include the version string.

Format:
```

<project-name>*vX.Y.Z*<artifact>.<ext>

````

Examples:
- proto-core_v2.0.0_fab.zip
- proto-core_v2.0.0_assembly.pdf
- proto-core_v2.0.0_bom.csv

---

## Documentation Titles

Proper capitalization is used **inside documents**, not in filenames.

Example:
```md
# Proto Core Bring-Up Plan
````

---

## Net Naming (Electrical)

Signal names follow the format:

```
<interface>_<signal>[_<qualifier>]
```

Rules:

* lowercase
* `_n` suffix for active-low signals
* no spaces or special characters

Examples:

* usb_d+
* usb_d-
* i2c_sda
* i2c_scl
* spi_clk
* spi_mosi
* mcu_rst_n

---

## Summary

* Lowercase, hyphen-separated naming everywhere
* Versions belong in metadata and artifacts, not filenames
* Consistency is mandatory

Deviations must be documented and justified.
