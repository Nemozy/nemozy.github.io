using UnityEngine;
using System.Collections;

namespace Tutorial
{

		public class Worm : MonoBehaviour
		{

				Transform weapon;
				public float weaponRotationSpeed = 50f;
				public float weaponMinAngle = 110f;
				public float weaponMaxAngle = 200;

				void Start ()
				{
						weapon = transform.Find ("bazooka");
				}

				void Update ()
				{
						RotateWeapon (Input.GetAxis ("Vertical"));
						MoveWorm (Input.GetAxis ("Horizontal"));
				}

				void RotateWeapon (float axis)
				{

						float rot = weapon.rotation.eulerAngles.z;

						var rotationTarget = Mathf.Clamp (rot - axis, weaponMinAngle, weaponMaxAngle);
						rot = Mathf.MoveTowardsAngle (rot, rotationTarget, Time.deltaTime * weaponRotationSpeed);

						weapon.rotation = Quaternion.Euler (0f, 0f, rot);

				}

				void MoveWorm (float axis)
				{			
						//flips the worm toward the facing direction 
						if (axis != 0)
								transform.localScale = new Vector3 (Mathf.Sign (-axis), transform.localScale.y, transform.localScale.z);
						
						transform.Translate (Vector3.right * Time.deltaTime * axis);
				}
		}
}