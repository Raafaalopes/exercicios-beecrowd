//calcula o temop de jogo considerando horas e minutos

#include <stdio.h>

int main(){
    int h_inicio, m_inicio, h_fim, m_fim, dur_h, dur_m;

    scanf("%d%d%d%d", &h_inicio, &m_inicio, &h_fim, &m_fim);

    if (h_inicio < h_fim) {
        dur_h = h_fim - h_inicio;
        if (m_inicio > m_fim) {
            dur_h -= 1;
            dur_m = 60 - m_inicio + m_fim;
        } else if (m_inicio < m_fim) {
            dur_m = m_fim - m_inicio;
        } else {
            dur_m = 0;
        }
    } else if (h_inicio > h_fim) {
        dur_h = 24 - h_inicio + h_fim;
        if (m_inicio > m_fim) {
            dur_h -= 1;
            dur_m = 60 - m_inicio + m_fim;
        } else if (m_inicio < m_fim) {
            dur_m = m_fim - m_inicio;
        } else {
            dur_m = 0;
        }
    } else {
        if (m_inicio == m_fim) {
            dur_h = 24;
            dur_m = 0;
        } else if (m_inicio < m_fim) {
            dur_h = 0;
            dur_m = m_fim - m_inicio;
        } else {
            dur_h = 23;
            dur_m = 60 - m_inicio + m_fim;
        }
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur_h, dur_m);

    return 0;
}
