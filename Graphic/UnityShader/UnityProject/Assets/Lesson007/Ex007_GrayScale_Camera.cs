﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ex007_GrayScale_Camera : MonoBehaviour {
	public Material grayScaleMat;

	void OnRenderImage(RenderTexture src, RenderTexture dst) {
		Graphics.Blit(src, dst, grayScaleMat);
	}
}
