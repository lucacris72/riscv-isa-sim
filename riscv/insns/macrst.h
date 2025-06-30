// In riscv/insns/macrst.h

// Logica per l'istruzione MACRST (macrst rd)
// L'operazione è: ACC = 0; rd = 0

// Azzera il registro accumulatore
p->get_state()->acc_reg = 0;

// Scrivi 0 nel registro destinazione per coerenza e per avere un risultato predicibile.
// Se la tua istruzione non dovesse scrivere in rd, potresti omettere questa riga,
// ma l'implementazione è più pulita così.
WRITE_RD(0);