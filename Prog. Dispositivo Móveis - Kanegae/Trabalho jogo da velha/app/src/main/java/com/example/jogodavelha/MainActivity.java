package com.example.jogodavelha;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button playAlone = findViewById(R.id.btnPlayAlone);
        playAlone.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent openViewGameAlone = new Intent(MainActivity.this, alone_selct_and_insert_name.class);
                startActivity(openViewGameAlone);
            }
        });
    }
}