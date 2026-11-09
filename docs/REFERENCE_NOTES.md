# Preserved component notes

Editorial copy of the previous README. Workstation paths are normalized; original source and immutable evidence are not modified. Earlier status claims belong to their named checkpoints, not the live device. Start with the current [README](../README.md).

# DSP — rdsp_driver.0.bin

Carrier OEM Quantenna seleccionado para el coprocesador DSP.
REA 6.8.0 y Ghidra 12.1.3 nativo se ejecutaron sobre su copia fijada el 3 de noviembre de 2026. El repositorio conserva el análisis Ghidra reabrible, pseudocódigo C, ASM por función y verificaciones independientes.

| Propiedad | Observación |
| --- | --- |
| Bytes | 246244 |
| SHA-256 | 87c882910d87cd29ba2004c4154e9240291aaad6aedb0ff4d90c7a5570be79fd |
| Formato | ELF32 little-endian, ARCompact e_machine 93 |
| Entrada declarada | 0x20000 |
| Segmentos de programa | 4 |
| Secciones, símbolos y DWARF | Ausentes |
| Ghidra funciones y reconstrucciones C | 295 |
| Ghidra instrucciones verificadas | 30251 |
| Ghidra bloques de memoria | 6 |
| Discrepancias de bytes de instrucciones | 0 |
| Cobertura de bytes de instrucciones sobre archivo original | 42,233 % |
| Reconstrucciones C con avisos Ghidra | 106 |
| GZF reimportado | Igualdad en 13 facetas verificadas |
| FWINFO tipo | 1 |
| FWINFO versión | 0x25040059 |
| Filas de ensamblador verificadas | 75363 |
| Bytes contrastados en filas de ensamblador | 246020 |
| Bytes sin fila de ensamblador | 0 |

Los originales, segmentos y volcados hexadecimales conservan sus bytes.
Cada fila de bytes del ensamblador ARC700 little-endian se verificó contra
su segmento. Las filas con directivas `.word`, `.long` o `.short` se
conservan como observaciones de datos o de instrucciones sin resolver.

## Archivos

- [Mapa ELF](../analysis/elf-layout.json) con offsets, vaddr, paddr y tamaños.
- [FWINFO](../analysis/firmware-info.json) con metadata release.
- [Cadenas](../analysis/strings.tsv) con offset de archivo.
- [Verificación](../analysis/verification.json) y [contraste independiente](../byte-verification.json).
- [REA entropía](../analysis/rea-entropy.json) y [regiones Binwalk](../analysis/rea-regions.json).
- [REA headers ARC](../analysis/rea-arc-headers.json) mediante GNU objdump.
- [REA apertura](../analysis/rea-artifact.json), [análisis Ghidra](../analysis/rea-ghidra-analysis.json)
  y [decompilación](../analysis/rea-decompile-all.json) con sus errores de arquitectura.

## Segmentos

| Índice | File offset | Vaddr | Paddr | Bytes de archivo | Bytes de memoria | Lectura |
| --- | --- | --- | --- | --- | --- | --- |
| 0 | 0xb4 | 0xffff0000 | 0x0 | 16 | 16 | [hex](../segments/segment-00.hex.tsv) |
| 1 | 0xc4 | 0x20000 | 0x0 | 246020 | 633760 | [hex](../segments/segment-01.hex.tsv) · [ARC700](../segments/segment-01.asm) |
| 2 | 0x3c1c8 | 0xdcf80000 | 0x0 | 0 | 16320 | BSS / sin bytes de archivo |
| 3 | 0x3c1c8 | 0xdcfa0000 | 0x0 | 0 | 16384 | BSS / sin bytes de archivo |

La decodificación lineal puede atravesar datos presentes dentro de segmentos RWE. El análisis nativo Ghidra conserva funciones y C inferidos, con sus contextos, direcciones y avisos. Los límites de funciones y el significado completo de extensiones específicas mantienen incertidumbres registradas. La lectura de estas salidas
se apoya en [las notas del loader](https://github.com/apelsito/hgw500-5ghz-firmwares-public/blob/main/docs/loader-notes.md).

## Análisis nativo Ghidra

El proveedor actual utiliza Ghidra 12.1.3, lenguaje `ARCompact:LE:32:default`
y compiler `default`. La extensión ARCompact procede de
`aleph-void/ghidra-arcompact` en
`41703a7bbac5a316e6e72381af67d5ee0e1d9d25`. Su ZIP, licencia Apache 2.0 y
recibo de instalación están en `ghidra-support/`.

- [GZF reabrible](../ghidra/quantenna-analysis.gzf) conserva la base de análisis.
- [C y ASM por función](../ghidra/functions/) conservan direcciones y resultados.
- [Inventario de funciones](../ghidra/ghidra-functions.tsv) permite recorrerlos.
- [Instrucciones](../ghidra/ghidra-instructions.tsv) y [mapas](../ghidra/memory-source-ranges.tsv)
  vinculan memoria, offsets y bytes originales.
- [Verificación nativa](../ghidra/byte-verification.json) contrasta instrucciones
  y rangos de memoria contra el carrier.
- [Reimportación GZF](../ghidra/roundtrip-verification.json) conserva el resultado
  de comparar 13 facetas de estado después de importar el GZF en otro proyecto.

La vista principal usa direcciones virtuales del core y de enlace. Los segmentos
con direcciones repetidas permanecen en overlays separados. El plan está en
`ghidra/carrier-import.json` y `ghidra/carrier-segment-plan.tsv`. El importador
conserva el paddr de carga y mantiene PC en la vista del core. Los registros de
estado runtime permanecen desconocidos cuando falta evidencia.

Las funciones y su C son inferidos mediante análisis estático de un carrier sin
símbolos ni DWARF. La decompilación completada conserva pseudocódigo susceptible
de revisión. Los avisos sobre loops LP, alias de direcciones y extensiones cuya
semántica depende del hardware permanecen en las salidas y el GZF. La
verificación de bytes y reimportación acredita fidelidad de conservación.
La equivalencia funcional necesita evidencias propias de ejecución.

Para reabrirlo, instalar Ghidra 12.1.3 con Java 21 e instalar el ZIP conservado
desde `File > Install Extensions`. Reiniciar Ghidra e importar
`ghidra/quantenna-analysis.gzf`. Este checkout individual incluye las
herramientas de reproducción en `tools/ghidra/`.

Para analizar de nuevo, desde la raíz de este repositorio en WSL Engineering,
indicar dos destinos ext4 ausentes.

```bash
python3 tools/ghidra/run_ghidra.py --role dsp --input rdsp_driver.0.bin --workspace ${EVIDENCE_ROOT}/quantenna-dsp-NUEVO-project --output ${EVIDENCE_ROOT}/quantenna-dsp-NUEVO-export
```

El wrapper exige el nombre y SHA-256 del carrier, exporta el análisis nativo,
reimporta el GZF en otro proyecto y compara los snapshots y bytes. `--ghidra`
permite indicar otra ruta de la distribución compatible. Los comandos, logs y
recibos se conservan en la nueva salida.

## Verificar este repositorio

El checkout incluye su input fijado, todos los segmentos y un verificador Python
autónomo. Contrasta los hashes, los headers ELF, cada volcado hexadecimal y cada
fila de bytes que objdump publicó. También valida el inventario completo de
archivos, las exportaciones nativas, los hashes GZF, las 13 facetas de
reimportación y el paquete ARCompact. Puede ejecutarse con Python 3 en Linux o Windows.

```bash
python3 tools/verify.py --root .
```

La reproducción de las inspecciones REA y el ensamblador lineal ARC está en las herramientas del
repositorio padre. Los comandos efectivos, códigos de salida y errores se conservan
en analysis/. Para reconstruir el conjunto se clona el padre con sus submódulos.
[Repositorio padre](https://github.com/apelsito/hgw500-5ghz-firmwares-public)

[PROVENANCE.json](../PROVENANCE.json) identifica el original, su selección y las herramientas.
[artifact-manifest.json](../artifact-manifest.json) identifica los archivos de esta entrega.
Mantener este repositorio privado. La autorización permite conservar el carrier
OEM de este coprocesador y su análisis en GitHub privado de apelsito.

## Arquitectura de procesamiento del HGW500

El [esquema y sus evidencias](../docs/HARDWARE_ARCHITECTURE.md), conservados el
3 de noviembre de 2026, identifican una CPU LHost ARC750 a 500 MHz y cuatro
coprocesadores: MuC, AuC, DSP y la MCU 8051 del RTL8192EE. Incluyen el inventario
SPI NOR de 16 MiB y el perfil DDR3 OEM de 128 MiB, con fuentes y límites.

![Arquitectura de procesamiento del HGW500](../docs/hardware/hgw500-processing-architecture.png)

El diagrama es una vista conceptual. La etiqueta qdrv describe el papel del
host; la integración física de 5 GHz en Core Boot R1 sigue pendiente.
