# Assembly  Checklist

**Scope:** Bare PCB → post-reflow cooled board  
**Intent:** Single-pass assembly verification without branching or over-specification

---

## 1. Pre-Assembly Readiness
- [ ] ESD mat connected and verified
- [ ] Correct PCB revision and board ID recorded
- [ ] Assembly tools present (tweezers, stencil, squeegee, microscope)
- [ ] Solder paste verified usable (type / lot noted)
- [ ] Hotplate operational

---

## 2. Bare PCB Inspection
- [ ] Top and bottom visually inspected under microscope
- [ ] Critical regions inspected (MCU, eMMC, buck, RF)
- [ ] No soldermask encroachment or missing pads
- [ ] No visible copper shorts or fabrication defects
- [ ] PCB clean and dry

---

## 3. Electrical Sanity (Bare Board)
- [ ] VIN → GND resistance checked
- [ ] 3V3 → GND resistance checked
- [ ] No unexpected shorts detected

---

## 4. Paste Application
- [ ] PCB secured in stencil jig
- [ ] Stencil aligned and constrained (no lateral movement)
- [ ] Paste deposited on squeegee
- [ ] Single smooth squeegee pass
- [ ] Paste inspected under microscope
- [ ] No bridges or missing paste on critical pads

*(If unacceptable: clean PCB and stencil completely, then reprint)*

---

## 5. Component Placement
- [ ] Non-BGA ICs placed first
- [ ] Crystals and critical passives placed
- [ ] Remaining passives placed by region
- [ ] eMMC BGA placed last
- [ ] All orientations verified
- [ ] No disturbed components

---

## 6. Pre-Reflow Final Check
- [ ] Full-board microscope inspection
- [ ] eMMC alignment verified
- [ ] No visibly skewed or lifted parts
- [ ] Optional: as-placed photos captured

---

## 7. Reflow
- [ ] Reflow performed per Hotplate Reflow Procedure
- [ ] Board removed at correct time
- [ ] Forced-air cooling applied

---

## 8. Post-Reflow (Immediate)
- [ ] Board cooled below 40 °C
- [ ] No visibly shifted, tombstoned, or bridged parts
- [ ] Board ready for cleaning or bring-up

---

**Checklist complete**
