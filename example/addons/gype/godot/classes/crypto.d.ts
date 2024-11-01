
import { CryptoKey } from "@godot/classes/crypto_key";
import { X509Certificate } from "@godot/classes/x509_certificate";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class Crypto extends RefCounted{
  public generate_random_bytes(_size: number): PackedByteArray;
  public generate_rsa(_size: number): CryptoKey;
  public generate_self_signed_certificate(_key: CryptoKey, _issuer_name: String | StringName | string, _not_before: String | StringName | string, _not_after: String | StringName | string): X509Certificate;
  public sign(_hash_type: number, _hash: PackedByteArray, _key: CryptoKey): PackedByteArray;
  public verify(_hash_type: number, _hash: PackedByteArray, _signature: PackedByteArray, _key: CryptoKey): boolean;
  public encrypt(_key: CryptoKey, _plaintext: PackedByteArray): PackedByteArray;
  public decrypt(_key: CryptoKey, _ciphertext: PackedByteArray): PackedByteArray;
  public hmac_digest(_hash_type: number, _key: PackedByteArray, _msg: PackedByteArray): PackedByteArray;
  public constant_time_compare(_trusted: PackedByteArray, _received: PackedByteArray): boolean;
}