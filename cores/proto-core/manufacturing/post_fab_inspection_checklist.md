Proto Core P1 – Post-Fab / Pre-Assembly Inspection Checklist

Applies to: Each PCB prior to solder paste application  
Project: ADA Proto Core (CORE P1)  
Revision: v1.0

⸻

1. Administrative & Traceability
	•	Serial number assigned
	•	PCB revision matches silkscreen (CORE P1 v1.0)
	•	Fabrication finish and thickness correct
	•	Board visually consistent with batch

⸻

2. Board Geometry & Overall Condition
	•	Board outline clean and symmetric
	•	No edge delamination or copper exposure
	•	Perimeter ENIG ring intact
	•	No visible warping or mechanical damage

⸻

3. Soldermask & ENIG (General)
	•	Soldermask aligned to pads
	•	No mask slivers or encroachment
	•	No bubbles, fisheyes, or pinholes
	•	ENIG uniform with no discoloration

⸻

4. MCU QFN Region (CRITICAL)
	•	All QFN pads present and equal length
	•	No soldermask between fine-pitch leads
	•	Thermal pad clean and planar
	•	Via-in-pad fill intact and flush
	•	No pad damage or thinning at corners

Failing any item in this section disqualifies the board from full population.

⸻

5. eMMC BGA Region (CRITICAL)
	•	All BGA pads present and centered
	•	No shorts or copper nodules between pads
	•	Via-in-pad fill uniform and flush
	•	Pad array symmetry preserved

Failing any item in this section disqualifies the board from full population.

⸻

6. Buck Regulator & Power Region (CRITICAL)
	•	VIN, SW, and GND pads clean
	•	No soldermask encroachment on power pads
	•	Thermal vias present and properly filled
	•	No copper debris near high-current nets

Power-region defects are high-risk and should not be ignored.

⸻

7. CPWG & Antenna Region (CRITICAL)
	•	CPWG trace geometry intact
	•	No copper or vias in antenna keep-out
	•	Ground clearance matches design intent
	•	No soldermask voids under antenna trace

RF defects often survive bring-up but fail later. Inspect carefully.

⸻

8. Test Pads, USB, and Remaining Signals
	•	USB D+ / D− pads symmetric and clean
	•	Test pads present and probe-accessible
	•	No silkscreen printed over pads
	•	Labels legible and correctly oriented

⸻

9. Cleanliness
	•	No dust or fibers embedded in soldermask
	•	No fingerprints or residue on ENIG
	•	Board cleaned with IPA prior to paste application

⸻

10. Assembly Disposition
	•	PASS – Approved for assembly
	•	CONDITIONAL – Assembly allowed with known risks
	•	FAIL – Do not populate

Inspector:  
Date:  
Notes:

⸻

This checklist is intended to be completed before solder paste application. Critical-section failures should result in immediate rejection or restricted use of the PCB.